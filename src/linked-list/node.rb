class Node
    attr_accessor :node, :next

    def initialize(node)
        @node = node
    end

    def has_loop?
        # Using Floyd's algorithm

        slow = fast = self

        while true
            slow = slow.next # only 1 hop

            if fast.next.nil?
                return false # Meaning we can't do "fast.next.next"
            else
                fast = fast.next.next # 2 hops
            end

            if slow.nil? or fast.nil? # Meaning "fast.next" or "slow.next" is not possible
                return false
            end

            if slow.node == fast.node
                return true # GOT IT
            end
        end
    end
end
