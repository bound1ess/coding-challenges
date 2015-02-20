class Node
    attr_accessor :node, :next

    def initialize(node)
        @node = node
    end

    def has_loop?
        slow = fast = self

        while true
            slow = slow.next

            if fast.next.nil?
                return false
            else
                fast = fast.next.next
            end

            if slow.nil? or fast.nil?
                return false
            end

            if slow.node == fast.node
                return true # GOT IT
            end
        end
    end
end
